//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber;
@protocol ILiveHomeCorePreview;

@protocol ILiveHomeCorePreviewClient <NSObject>

@optional
- (void)liveHomeCorePreview:(id <ILiveHomeCorePreview>)arg1 onLivePreviewAction:(long long)arg2 withEventId:(NSNumber *)arg3 success:(_Bool)arg4;
- (void)liveHomeCorePreview:(id <ILiveHomeCorePreview>)arg1 onLivePreviewStateQueried:(NSDictionary *)arg2;
@end

