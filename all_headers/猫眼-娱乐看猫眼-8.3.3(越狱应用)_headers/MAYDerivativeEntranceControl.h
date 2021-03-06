//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAYGroupStyleCellControl.h"

@class MAYDerivativeEntry, MAYDerivativeEntryView, MAYMovieDetailSectionTitleView;

@interface MAYDerivativeEntranceControl : MAYGroupStyleCellControl
{
    MAYDerivativeEntryView *_entryView;
    MAYMovieDetailSectionTitleView *_titleView;
    CDUnknownBlockType _allButtonClickedBlock;
    CDUnknownBlockType _dealViewClickedBlock;
    MAYDerivativeEntry *_entry;
}

@property(retain, nonatomic) MAYDerivativeEntry *entry; // @synthesize entry=_entry;
@property(copy, nonatomic) CDUnknownBlockType dealViewClickedBlock; // @synthesize dealViewClickedBlock=_dealViewClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType allButtonClickedBlock; // @synthesize allButtonClickedBlock=_allButtonClickedBlock;
@property(retain, nonatomic) MAYMovieDetailSectionTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MAYDerivativeEntryView *entryView; // @synthesize entryView=_entryView;
- (void).cxx_destruct;
- (void)entryViewDidClicked;
- (void)allButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

