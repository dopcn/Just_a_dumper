//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface GlobalVariables : NSObject
{
    _Bool _isLaunchingFromPush;
    _Bool _isPlayMV;
    _Bool _isNeedMVNetAlert;
    NSDate *_recievedCodeDate;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDate *recievedCodeDate; // @synthesize recievedCodeDate=_recievedCodeDate;
- (void).cxx_destruct;
- (_Bool)getNeedMVNetAlert;
- (void)setNeedMVNetAlert:(_Bool)arg1;
- (_Bool)getIsPlayMV;
- (void)setIsPlayMV:(_Bool)arg1;
- (_Bool)getIsLaunchingFromPush;
- (void)setIsLaunchingFromPush:(_Bool)arg1;
- (id)init;

@end

