//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MOVIEBaseTableViewSection;

@protocol MOVIETableViewSectionDelegate <NSObject>
- (MOVIEBaseTableViewSection *)nextSection:(MOVIEBaseTableViewSection *)arg1;
- (MOVIEBaseTableViewSection *)preSection:(MOVIEBaseTableViewSection *)arg1;
- (void)section:(MOVIEBaseTableViewSection *)arg1 needShow:(_Bool)arg2;
- (void)sectionNeedReloadTableView:(MOVIEBaseTableViewSection *)arg1;
@end

