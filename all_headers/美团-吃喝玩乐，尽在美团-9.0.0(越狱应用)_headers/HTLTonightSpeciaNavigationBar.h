//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTLSearchFieldViewController, UIButton;

@interface HTLTonightSpeciaNavigationBar : UIView
{
    CDUnknownBlockType _didClickMapButtonBlock;
    CDUnknownBlockType _searchCompleteBlock;
    UIButton *_backButton;
    UIButton *_mapButton;
    HTLSearchFieldViewController *_searchFieldVC;
}

@property(retain, nonatomic) HTLSearchFieldViewController *searchFieldVC; // @synthesize searchFieldVC=_searchFieldVC;
@property(retain, nonatomic) UIButton *mapButton; // @synthesize mapButton=_mapButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) CDUnknownBlockType searchCompleteBlock; // @synthesize searchCompleteBlock=_searchCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickMapButtonBlock; // @synthesize didClickMapButtonBlock=_didClickMapButtonBlock;
- (void).cxx_destruct;
- (void)didClickMapButton;
- (void)didClickBackButton;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

