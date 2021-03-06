//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UGCUserContentSubmitOperation.h"

@class NSArray, NSNumber, NVModelBaseSubmitReviewResult, NVModelBaseUGCUserReview, NVMultiUploadPhotoOperation;

@interface UGCAddReviewOperation : UGCUserContentSubmitOperation
{
    _Bool _haveUncontrolError;
    _Bool _isEdited;
    NVModelBaseUGCUserReview *_review;
    NSNumber *_result;
    NVModelBaseSubmitReviewResult *_submitResult;
    NSArray *_needUploadPhotos;
    unsigned long long _nextStep;
    NVMultiUploadPhotoOperation *_uploadOperation;
}

@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(nonatomic) _Bool haveUncontrolError; // @synthesize haveUncontrolError=_haveUncontrolError;
@property(retain, nonatomic) NVMultiUploadPhotoOperation *uploadOperation; // @synthesize uploadOperation=_uploadOperation;
@property(nonatomic) unsigned long long nextStep; // @synthesize nextStep=_nextStep;
@property(retain, nonatomic) NSArray *needUploadPhotos; // @synthesize needUploadPhotos=_needUploadPhotos;
@property(retain, nonatomic) NVModelBaseSubmitReviewResult *submitResult; // @synthesize submitResult=_submitResult;
@property(retain, nonatomic) NSNumber *result; // @synthesize result=_result;
@property(readonly, nonatomic) NVModelBaseUGCUserReview *review; // @synthesize review=_review;
- (void).cxx_destruct;
- (void)submitReviewFailed;
- (void)submitReviewSuccess;
- (void)removeDraft:(id)arg1;
- (void)updateDraft:(id)arg1;
- (void)gotoDraftBox;
- (void)finishUpdateReviewPhotos;
- (void)startUpdateShopPhotos;
- (id)getVideoDictionary:(id)arg1;
- (id)getPhotoDictionary:(id)arg1;
- (id)makeExtroInfoData;
- (id)getSubmitData;
- (void)handlebindResult:(id)arg1;
- (void)submitReview;
- (void)processUploadResultWithExtroInfo:(id)arg1 AndResults:(id)arg2;
- (void)processUploadResults:(id)arg1;
- (_Bool)haveFailedUploadPhotos;
- (void)updateProgress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)uploadPhotos;
- (void)uploadVideo;
- (void)main;
- (void)getUploadPhotos;
- (void)updateDraftInfo;
- (id)userContent;
- (void)setOperationEnd;
- (void)startNextStep;
- (void)resetReview;
- (id)initWithReview:(id)arg1 andEdited:(_Bool)arg2;

@end

