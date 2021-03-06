//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController, WMHertzPageConfigItem, WMHertzPageEventDomain;

@interface WMHertzPageTrackRecord : NSObject
{
    NSString *_page;
    UIViewController *_viewController;
    WMHertzPageConfigItem *_configItem;
    WMHertzPageEventDomain *_initialEvent;
    WMHertzPageEventDomain *_requestEvent;
    WMHertzPageEventDomain *_renderEvent;
    WMHertzPageEventDomain *_finalEvent;
}

@property(retain, nonatomic) WMHertzPageEventDomain *finalEvent; // @synthesize finalEvent=_finalEvent;
@property(retain, nonatomic) WMHertzPageEventDomain *renderEvent; // @synthesize renderEvent=_renderEvent;
@property(retain, nonatomic) WMHertzPageEventDomain *requestEvent; // @synthesize requestEvent=_requestEvent;
@property(retain, nonatomic) WMHertzPageEventDomain *initialEvent; // @synthesize initialEvent=_initialEvent;
@property(retain, nonatomic) WMHertzPageConfigItem *configItem; // @synthesize configItem=_configItem;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, copy, nonatomic) NSString *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 startTime:(double)arg2;

@end

