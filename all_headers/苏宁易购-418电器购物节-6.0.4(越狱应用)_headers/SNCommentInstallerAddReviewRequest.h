//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSLOrderBaseRequest.h"

@protocol SNCommentInstallerAddReviewRequestDelegate;

@interface SNCommentInstallerAddReviewRequest : SNSLOrderBaseRequest
{
    id <SNCommentInstallerAddReviewRequestDelegate> _reviewDelegate;
}

@property(nonatomic) __weak id <SNCommentInstallerAddReviewRequestDelegate> reviewDelegate; // @synthesize reviewDelegate=_reviewDelegate;
- (void).cxx_destruct;
- (void)requestDidCompleted;
- (id)requestHeaderFieldValueDictionary;
- (void)requestDidFailed;
- (id)requestArgument;
- (long long)requestMethod;
- (id)requestUrl;
- (void)commitInstallerComment:(id)arg1 service:(id)arg2 content:(id)arg3 speedStar:(id)arg4 attitudeStar:(id)arg5 installerId:(id)arg6 labels:(id)arg7 omsOrderItemId:(id)arg8 installerType:(id)arg9;

@end

