//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CTTrainQiangPiaoSpeedUpView, TrainGrabAppendProductTypeV2Model, TrainJLTaskInfoModel;

@protocol CTTrainQiangPiaoSpeedUpViewDelegate <NSObject>
- (void)qiangPiaoSpeedUpView:(CTTrainQiangPiaoSpeedUpView *)arg1 didPressTagWithAppendProductTypeModel:(TrainGrabAppendProductTypeV2Model *)arg2 taskInfoModel:(TrainJLTaskInfoModel *)arg3;
- (void)qiangPiaoSpeedUpView:(CTTrainQiangPiaoSpeedUpView *)arg1 nowSpeedUpWithAppendProductTypeModel:(TrainGrabAppendProductTypeV2Model *)arg2 taskInfoModel:(TrainJLTaskInfoModel *)arg3 buyNumber:(long long)arg4;
- (void)qiangPiaoSpeedUpViewQiuAction:(CTTrainQiangPiaoSpeedUpView *)arg1 taskInfoModel:(TrainJLTaskInfoModel *)arg2;
@end

