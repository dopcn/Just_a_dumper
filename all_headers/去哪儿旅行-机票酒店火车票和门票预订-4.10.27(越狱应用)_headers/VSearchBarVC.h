//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SearchBarDelgt-Protocol.h"

@class NSString, SearchBar;
@protocol StatPageInfoPtc, VSearcherBarVCDelegate;

@interface VSearchBarVC : UIViewController <SearchBarDelgt>
{
    unsigned char _isSearching;
    SearchBar *_searchBar;
    NSString *_searchStr;
    id <VSearcherBarVCDelegate> _delegate;
    id <StatPageInfoPtc> _statisticsDlgt;
}

@property(nonatomic) __weak id <StatPageInfoPtc> statisticsDlgt; // @synthesize statisticsDlgt=_statisticsDlgt;
@property(nonatomic, setter=setDelegate:) __weak id <VSearcherBarVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned char isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) NSString *searchStr; // @synthesize searchStr=_searchStr;
@property(retain, nonatomic) SearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)setReturnKeyType:(long long)arg1;
- (void)refreshSearchViewAndDataWhenSearchEmpty;
- (void)searchBarBarButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

