//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputViewController.h>

@class NLVerticalGrowingViewHandler, UICollectionView, UICollectionViewFlowLayout, _TtC4LINE14PlusMenuConfig;

@interface _TtC4LINE27PlusMenuInputViewController : UIInputViewController
{
    // Error parsing type: , name: manager
    // Error parsing type: , name: actionDelegate
    // Error parsing type: , name: config
    // Error parsing type: , name: growingViewHandler
    // Error parsing type: , name: menuItems
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: layout
}

+ (id)createViewController;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) UICollectionViewFlowLayout *layout; // @synthesize layout;
@property(nonatomic, retain) UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic, retain) NLVerticalGrowingViewHandler *growingViewHandler; // @synthesize growingViewHandler;
@property(nonatomic, retain) _TtC4LINE14PlusMenuConfig *config; // @synthesize config;

@end

