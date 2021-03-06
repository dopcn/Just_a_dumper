//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

@interface HTLCityChangeHeaderView : UIView
{
    NSString *_keyWord;
    CDUnknownBlockType _touchSearchBlock;
    CDUnknownBlockType _currentCityWillChange;
    CDUnknownBlockType _presentCityListBlock;
    UIView *_titleView;
    UIButton *_searchView;
    UIView *_changeCityButton;
}

@property(retain, nonatomic) UIView *changeCityButton; // @synthesize changeCityButton=_changeCityButton;
@property(retain, nonatomic) UIButton *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) CDUnknownBlockType presentCityListBlock; // @synthesize presentCityListBlock=_presentCityListBlock;
@property(copy, nonatomic) CDUnknownBlockType currentCityWillChange; // @synthesize currentCityWillChange=_currentCityWillChange;
@property(copy, nonatomic) CDUnknownBlockType touchSearchBlock; // @synthesize touchSearchBlock=_touchSearchBlock;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
- (void).cxx_destruct;
- (void)configureCityButtonTitle:(id)arg1;
- (void)updateConstraints;
- (void)commonInit;
- (id)init;

@end

