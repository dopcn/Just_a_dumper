//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KTVFeedRecommendSectionProcotol-Protocol.h"

@class NSString;

@interface KTVFeedRecommendSingleSection : NSObject <KTVFeedRecommendSectionProcotol>
{
    NSString *_cellReuseIdentifier;
    id _model;
    Class _cellClass;
}

+ (id)singleSectionWithModel:(id)arg1 cellReuseIdentifier:(id)arg2 cellClass:(Class)arg3 inTableView:(id)arg4;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *cellReuseIdentifier; // @synthesize cellReuseIdentifier=_cellReuseIdentifier;
- (void).cxx_destruct;
- (void)registerCellReuseIdentifierInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadCellWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

