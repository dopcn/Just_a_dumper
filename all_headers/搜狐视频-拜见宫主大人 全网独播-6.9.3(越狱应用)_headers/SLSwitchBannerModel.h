//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SLSwitchBannerModel : NSObject
{
    _Bool _showBanner;
    _Bool _showDBicon;
    _Bool _showReci;
    _Bool _caidanhongbao;
    _Bool _sdkLogReport;
    NSString *_changeTime;
    NSString *_ReciContent;
}

@property(nonatomic) _Bool sdkLogReport; // @synthesize sdkLogReport=_sdkLogReport;
@property(nonatomic) _Bool caidanhongbao; // @synthesize caidanhongbao=_caidanhongbao;
@property(copy, nonatomic) NSString *ReciContent; // @synthesize ReciContent=_ReciContent;
@property(nonatomic) _Bool showReci; // @synthesize showReci=_showReci;
@property(nonatomic) _Bool showDBicon; // @synthesize showDBicon=_showDBicon;
@property(copy, nonatomic) NSString *changeTime; // @synthesize changeTime=_changeTime;
@property(nonatomic) _Bool showBanner; // @synthesize showBanner=_showBanner;
- (void).cxx_destruct;

@end

