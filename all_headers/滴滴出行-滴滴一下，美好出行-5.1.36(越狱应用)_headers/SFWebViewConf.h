//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SFActivityConf.h"

@class NSDictionary, NSString;

@interface SFWebViewConf : SFActivityConf
{
    _Bool _isFullFill;
    _Bool _shouldShow;
    NSString *_webUrlStr;
    double _webHeight;
    NSDictionary *_param;
}

@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
@property(nonatomic) _Bool isFullFill; // @synthesize isFullFill=_isFullFill;
@property(copy, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(nonatomic) double webHeight; // @synthesize webHeight=_webHeight;
@property(copy, nonatomic) NSString *webUrlStr; // @synthesize webUrlStr=_webUrlStr;
- (void).cxx_destruct;

@end

