//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDMessageListControlModel.h"

@class NSString, PAApi_SNSCENTER_NotifyInfo;

@interface PDMessageListHealthCircleModel : PDMessageListControlModel
{
    PAApi_SNSCENTER_NotifyInfo *_healthCircleBusinessModel;
    NSString *_featureJSONValue;
}

@property(retain, nonatomic) NSString *featureJSONValue; // @synthesize featureJSONValue=_featureJSONValue;
@property(retain, nonatomic) PAApi_SNSCENTER_NotifyInfo *healthCircleBusinessModel; // @synthesize healthCircleBusinessModel=_healthCircleBusinessModel;
- (void).cxx_destruct;
- (id)description;
- (void)transformHealthCircleModelFromJson:(id)arg1;
- (id)transformMessageContent;

@end

