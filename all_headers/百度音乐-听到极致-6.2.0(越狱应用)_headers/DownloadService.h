//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DownloadService : NSObject
{
    _Bool _needResumeMusicDownload;
    _Bool _needResumeMVDownload;
    _Bool _needResumeLMDownload;
}

+ (void)purgeSharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceSynch;
+ (id)sharedInstanceNoSynch;
@property(nonatomic) _Bool needResumeLMDownload; // @synthesize needResumeLMDownload=_needResumeLMDownload;
@property(nonatomic) _Bool needResumeMVDownload; // @synthesize needResumeMVDownload=_needResumeMVDownload;
@property(nonatomic) _Bool needResumeMusicDownload; // @synthesize needResumeMusicDownload=_needResumeMusicDownload;
- (int)getDownloadFirstQuality;
- (int)getDownloadStrategyQuality;
- (void)checkNetwork;
- (void)reachabilityChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

