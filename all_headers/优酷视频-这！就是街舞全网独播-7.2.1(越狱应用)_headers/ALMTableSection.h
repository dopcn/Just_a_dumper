//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALMBaseListViewModel.h"

#import "ALMTableSectionProtocol-Protocol.h"

@class NSString;

@interface ALMTableSection : ALMBaseListViewModel <ALMTableSectionProtocol>
{
    NSString *_headerTitle;
    NSString *_footerTitle;
    double _headerHeight;
    double _footerHeight;
    unsigned long long _index;
    NSString *_indexTitle;
}

@property(copy, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

