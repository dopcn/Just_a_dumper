//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GJHRUserCenterManager : NSObject
{
    id _target;
}

+ (struct CGRect)imagePositionInImageView:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)uploadImage:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)uploadHeadImage:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)updateHeadImageUrlToUC:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)modifyNickname:(id)arg1 isThirdPart:(_Bool)arg2;

@end

