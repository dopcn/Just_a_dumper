//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BMRouteSearchController, NSString;

@interface BMNaviInterface : NSObject
{
    BMRouteSearchController *_searchController;
    unsigned long long _routeChooseStatistic;
    NSString *_routeIndentifier;
}

+ (id)defaultInstance;
- (void).cxx_destruct;
- (void)startRealNaviDirect:(id)arg1 mrsl:(id)arg2 extParam:(id)arg3;
- (void)setUserChooseRouteBit;
- (void)saveCarRouteChoose:(unsigned long long)arg1 indentifier:(id)arg2;
- (_Bool)gotoNavi:(id)arg1 extParam:(id)arg2;
- (_Bool)gotoCustomVoicePage:(_Bool)arg1 extParam:(id)arg2;
- (id)init;

@end

