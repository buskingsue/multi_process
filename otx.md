/home/kds/training_extensions/otx-workspace/20250318_015512
otx benchmark \
    --work_dir otx-workspace \
    --checkpoint otx-workspace/20240312_055042/optimized_model.xml \
    --engine.device cpu


# ===================학습 명령===============================
## otx train --config /home/kds/training_extensions/src/otx/recipe/classification/multi_class_cls/tv_mobilenet_v3_small.yaml --data_root ./flower_photos --max_epochs 10

# ====================================================

## otx train --config /home/kds/training_extensions/src/otx/recipe/classification/multi_class_cls/deit_tiny.yaml --data_root ./flower_photos --max_epochs 10

# =========================================================

## otx train --config /home/kds/training_extensions/src/otx/recipe/classification/h_label_cls/mobilenet_v3_large.yaml --data_root ./flower_photos --max_epochs 10 

# ===========================================================

## otx train --config /home/kds/training_extensions/src/otx/recipe/classification/multi_class_cls/deit_tiny.yaml --data_root ./flower_photos --max_epochs 10

# ===================================================================
echo "====== OTX Benchmark Results ======"
echo "Accuracy:"
otx test --work_dir otx-workspace --checkpoint otx-workspace/latest/optimized_model.xml --engine.device cpu | grep "Top-1 Accuracy"

echo "FPS & Latency:"
otx benchmark --work_dir otx-workspace --checkpoint otx-workspace/latest/optimized_model.xml --engine.device cpu | grep -E "FPS|Latency"

echo "Training Time:"
cat otx-workspace/latest/train.log | grep "Training completed in"

echo "Hyperparameters:"
cat otx-workspace/latest/configs.yaml | grep -E "batch_size|learning_rate"






otx test \
    --work_dir /home/kds/training_extensions/otx-workspace \
    --checkpoint /home/kds/training_extensions/otx-workspace/20250318_015512/checkpoints/epoch_001.ckpt \
    --engine.device cpu \
    --data_root /home/kds/training_extensions/flower_photos \

