//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMacDetect;

@interface GIGBDBussiness : NSObject
{
    GIMacDetect *_giMacDetect;
}

+ (id)shareInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) GIMacDetect *giMacDetect; // @synthesize giMacDetect=_giMacDetect;
- (void).cxx_destruct;
- (void)handleType77:(id)arg1;
- (void)scanTimerMethod;
- (void)dealloc;
- (void)setupType77;

@end

