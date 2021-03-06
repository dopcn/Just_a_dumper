//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TBShelfBottomToolbarDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@interface TBSubscriptionOrEssayViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, TBShelfBottomToolbarDelegate>
{
    // Error parsing type: , name: themeStyle
    // Error parsing type: , name: publicationType
    // Error parsing type: , name: status
    // Error parsing type: , name: _path
    // Error parsing type: , name: _searchingPath
    // Error parsing type: , name: _titleBarOverlayView
    // Error parsing type: , name: _titleBarSeparatorView
    // Error parsing type: , name: _titleBarView
    // Error parsing type: , name: _collectionView
    // Error parsing type: , name: _toolbar
    // Error parsing type: , name: _bottomDownloadToolbar
    // Error parsing type: , name: _bottomDownloadToolbarUnsafeBackgroundView
    // Error parsing type: , name: _bottomDownloadToolbarLayoutConstraints
    // Error parsing type: , name: _errorView
    // Error parsing type: , name: _activityIndicatorView
    // Error parsing type: , name: _openOriginalTabView
    // Error parsing type: , name: _emptySearchingResultsLabel
    // Error parsing type: , name: _panGestureRecognizer
    // Error parsing type: , name: _panningCell
    // Error parsing type: , name: _panningCellInitialTranslationX
    // Error parsing type: , name: _publications
    // Error parsing type: , name: _pagination
    // Error parsing type: , name: _showsSelectionIndicator
    // Error parsing type: , name: _selectedPublicationIDs
    // Error parsing type: , name: _downloadablePublicationIDs
    // Error parsing type: , name: _localShelfManager
    // Error parsing type: , name: _observedProgresses
    // Error parsing type: , name: _allFractionCompleted
    // Error parsing type: , name: _loadingTask
    // Error parsing type: , name: _searchingPattern
}

- (CDUnknownBlockType).cxx_destruct;
- (void)_handleWithPanGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)errorView:(id)arg1 didClickRefreshButton:(id)arg2 withEvent:(id)arg3;
- (void)shelfBottomToolbar:(id)arg1 didClickDownloadButton:(id)arg2;
- (void)shelfBottomToolbarDidToggleSelection:(id)arg1;
- (_Bool)searchFieldShouldBeginEditing:(id)arg1;
- (void)searchField:(id)arg1 textDidChange:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_didClickWithModificationButton:(id)arg1 with:(id)arg2;
- (void)_didClickWithBackButton:(id)arg1 with:(id)arg2;
- (void)_didClickWithCancellationButton:(id)arg1 with:(id)arg2;
- (void)_observedWithTabBarControllerDidChange:(id)arg1 of:(id)arg2;
- (id)tb_navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)rk_willBePresentedAnimated:(_Bool)arg1;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPublicationType:(unsigned long long)arg1 toolbarStatus:(unsigned long long)arg2;

@end

