//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UILabel;
@protocol XHGameMenuViewDelegate;

@interface XHGameMenuView : UIView
{
    id <XHGameMenuViewDelegate> _delegate;
    NSArray *_gameItems;
    UILabel *_titleLable;
    NSMutableArray *_gameItemButtons;
}

@property(retain, nonatomic) NSMutableArray *gameItemButtons; // @synthesize gameItemButtons=_gameItemButtons;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) NSArray *gameItems; // @synthesize gameItems=_gameItems;
@property(nonatomic) __weak id <XHGameMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickItemButton:(id)arg1;
- (void)layoutSubviews;
- (void)viewInit;
- (id)init;

@end

