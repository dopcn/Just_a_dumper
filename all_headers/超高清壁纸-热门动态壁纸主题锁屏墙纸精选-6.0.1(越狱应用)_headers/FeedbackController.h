//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FeedbackController : NSObject
{
}

+ (id)sharedFeedbackController;
- (_Bool)needShowLinkByType:(int)arg1 position:(long long)arg2;
- (void)feedbackLinkWithEvent:(int)arg1 linkId:(id)arg2 monitor:(id)arg3;
- (void)feedbackLinkWithEvent:(int)arg1 linkId:(id)arg2;
- (_Bool)needSendLinkEnterStats:(long long)arg1;
- (_Bool)needSendLinkShowStats:(long long)arg1;
- (void)feedbackPictureWithEvent:(int)arg1 linkId:(id)arg2 monitor:(id)arg3;
- (void)feedbackPushSecondaryWithEvent:(int)arg1 linkId:(id)arg2;
- (void)feedbackOpenPushWithEvent:(int)arg1 fullName:(id)arg2;

@end

