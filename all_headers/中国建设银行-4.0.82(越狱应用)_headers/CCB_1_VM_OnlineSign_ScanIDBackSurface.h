//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBBaseFormViewModel.h"

@class CCBBaseError, CCBImgFormItem, CCBInputFormItem, CCB_OnlineSign_Model, UIImage;

@interface CCB_1_VM_OnlineSign_ScanIDBackSurface : CCBBaseFormViewModel
{
    _Bool _identifySuccessed;
    _Bool _livnessSuccessed;
    _Bool _signSuccessed;
    _Bool _verifyLivness;
    CCB_OnlineSign_Model *_clientModel;
    CCBBaseError *_errobj;
    UIImage *_avatarImg;
    CCBInputFormItem *_instItem;
    CCBInputFormItem *_validBgnItem;
    CCBInputFormItem *_validEndItem;
    CCBImgFormItem *_imgItem;
}

@property(nonatomic) _Bool verifyLivness; // @synthesize verifyLivness=_verifyLivness;
@property(retain, nonatomic) CCBImgFormItem *imgItem; // @synthesize imgItem=_imgItem;
@property(retain, nonatomic) CCBInputFormItem *validEndItem; // @synthesize validEndItem=_validEndItem;
@property(retain, nonatomic) CCBInputFormItem *validBgnItem; // @synthesize validBgnItem=_validBgnItem;
@property(retain, nonatomic) CCBInputFormItem *instItem; // @synthesize instItem=_instItem;
@property(nonatomic) _Bool signSuccessed; // @synthesize signSuccessed=_signSuccessed;
@property(nonatomic) _Bool livnessSuccessed; // @synthesize livnessSuccessed=_livnessSuccessed;
@property(nonatomic) _Bool identifySuccessed; // @synthesize identifySuccessed=_identifySuccessed;
@property(retain, nonatomic) UIImage *avatarImg; // @synthesize avatarImg=_avatarImg;
@property(retain, nonatomic) CCBBaseError *errobj; // @synthesize errobj=_errobj;
@property(retain, nonatomic) CCB_OnlineSign_Model *clientModel; // @synthesize clientModel=_clientModel;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)setImg:(id)arg1;
- (void)onlineSign;
- (void)inspectLivnessWithImgData:(id)arg1;
- (void)inspectIDPhoto;
- (void)inspectIDCard;
- (void)setDisplayInfo:(id)arg1;
- (id)init;

@end

