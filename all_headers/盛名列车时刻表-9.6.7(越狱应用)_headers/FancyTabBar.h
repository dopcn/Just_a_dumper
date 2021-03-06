//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, UIButton, UIDynamicAnimator, UIDynamicBehavior, UIImage, UIViewController;
@protocol FancyTabBarDelegate;

@interface FancyTabBar : UIView
{
    _Bool _calculated;
    _Bool _open;
    _Bool _animating;
    int _currentDirectionToPopOptions;
    id <FancyTabBarDelegate> _delegate;
    NSArray *_choices;
    NSMutableDictionary *_destinationCoordinateDictionary;
    NSMutableDictionary *_originalCoordinateDictionary;
    UIImage *_mainButtonImage;
    UIButton *_mainButton;
    UIView *_backgroundView;
    UIDynamicAnimator *_dynamicsAnimator;
    UIDynamicBehavior *_dynamicBehaviour;
    UIViewController *_parentViewController;
    struct CGPoint _mainBtnCustomOrigin;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) struct CGPoint mainBtnCustomOrigin; // @synthesize mainBtnCustomOrigin=_mainBtnCustomOrigin;
@property(retain, nonatomic) UIDynamicBehavior *dynamicBehaviour; // @synthesize dynamicBehaviour=_dynamicBehaviour;
@property(retain, nonatomic) UIDynamicAnimator *dynamicsAnimator; // @synthesize dynamicsAnimator=_dynamicsAnimator;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *mainButton; // @synthesize mainButton=_mainButton;
@property(retain, nonatomic) UIImage *mainButtonImage; // @synthesize mainButtonImage=_mainButtonImage;
@property(retain, nonatomic) NSMutableDictionary *originalCoordinateDictionary; // @synthesize originalCoordinateDictionary=_originalCoordinateDictionary;
@property(retain, nonatomic) NSMutableDictionary *destinationCoordinateDictionary; // @synthesize destinationCoordinateDictionary=_destinationCoordinateDictionary;
@property(retain, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool open; // @synthesize open=_open;
@property(nonatomic) _Bool calculated; // @synthesize calculated=_calculated;
@property(nonatomic) __weak id <FancyTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int currentDirectionToPopOptions; // @synthesize currentDirectionToPopOptions=_currentDirectionToPopOptions;
- (void).cxx_destruct;
- (void)expandAnimation;
- (void)collapseAnimation;
- (void)collapse;
- (void)explode;
- (void)calculateExpandedCoordinates;
- (void)choose:(id)arg1;
- (void)setUpChoices:(id)arg1 choices:(id)arg2 withMainButtonImage:(id)arg3;
- (void)setUpChoices:(id)arg1 choices:(id)arg2 withMainButtonImage:(id)arg3 andMainButtonCustomOrigin:(struct CGPoint)arg4;
- (void)resetViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

