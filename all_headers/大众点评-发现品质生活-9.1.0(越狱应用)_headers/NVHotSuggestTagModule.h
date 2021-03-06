//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVHotSuggestBaseModule.h"

#import "SEARCHHotSuggestTagCellDelegate-Protocol.h"

@class NSString, NVModelBaseHotSuggestResult, SEARCHHotSuggestTagCell;

@interface NVHotSuggestTagModule : NVHotSuggestBaseModule <SEARCHHotSuggestTagCellDelegate>
{
    NVModelBaseHotSuggestResult *_hotSuggestResult;
    SEARCHHotSuggestTagCell *_tagCell;
}

@property(retain, nonatomic) SEARCHHotSuggestTagCell *tagCell; // @synthesize tagCell=_tagCell;
@property(retain, nonatomic) NVModelBaseHotSuggestResult *hotSuggestResult; // @synthesize hotSuggestResult=_hotSuggestResult;
- (void).cxx_destruct;
- (void)hotSuggestTagCellClick:(id)arg1;
- (void)changeGroupAction:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)shouldShow;
- (void)update:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

