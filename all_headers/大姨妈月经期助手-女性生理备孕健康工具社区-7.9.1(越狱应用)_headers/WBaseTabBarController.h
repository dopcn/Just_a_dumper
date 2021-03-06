//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DUITabBarController.h"

@class NSArray, NSMutableArray, UIColor, UIImageView, UIView;

@interface WBaseTabBarController : DUITabBarController
{
    UIView *_bottomBar;
    UIColor *_normalColor;
    UIColor *_pressedColor;
    UIColor *_pressedBackgroundColor;
    UIImageView *_tabImageView;
    NSArray *_tabButtons;
    NSMutableArray *_arrIcons;
    NSMutableArray *_arrIconsPressed;
    NSMutableArray *_arrIconsActive;
    NSMutableArray *_arrIconsText;
    long long _offsetHeight;
    NSArray *_itemsArray;
    long long _defaultIndex;
}

@property(nonatomic) long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(copy, nonatomic) NSArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(nonatomic) long long offsetHeight; // @synthesize offsetHeight=_offsetHeight;
@property(retain, nonatomic) NSMutableArray *arrIconsText; // @synthesize arrIconsText=_arrIconsText;
@property(retain, nonatomic) NSMutableArray *arrIconsActive; // @synthesize arrIconsActive=_arrIconsActive;
@property(retain, nonatomic) NSMutableArray *arrIconsPressed; // @synthesize arrIconsPressed=_arrIconsPressed;
@property(retain, nonatomic) NSMutableArray *arrIcons; // @synthesize arrIcons=_arrIcons;
@property(copy, nonatomic) NSArray *tabButtons; // @synthesize tabButtons=_tabButtons;
@property(retain, nonatomic) UIImageView *tabImageView; // @synthesize tabImageView=_tabImageView;
@property(retain, nonatomic) UIColor *pressedBackgroundColor; // @synthesize pressedBackgroundColor=_pressedBackgroundColor;
@property(retain, nonatomic) UIColor *pressedColor; // @synthesize pressedColor=_pressedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) __weak UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
- (void).cxx_destruct;
- (void)setTabSelectIndex:(long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)touchUpInside:(id)arg1;
- (void)touchUpCancel:(id)arg1;
- (void)touchUpOutside:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)layoutButtons;
- (void)setButtonSelected:(_Bool)arg1 atIndex:(long long)arg2;
- (void)initViews;
- (void)initVars;
- (id)createBottomBarWithFrame:(struct CGRect)arg1 isSingular:(_Bool)arg2;
- (void)reload;
- (void)viewDidLoad;
- (_Bool)supportsPopGuesture;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (id)initWithSelectIndex:(long long)arg1;

@end

