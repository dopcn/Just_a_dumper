//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UITableView, UITapGestureRecognizer;
@protocol PopupMenuDelegate;

@interface PopupMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    UIImageView *bgImageView;
    UITableView *table;
    NSMutableArray *items;
    UITapGestureRecognizer *tapRecognizer;
    id <PopupMenuDelegate> delegate;
}

@property(nonatomic) id <PopupMenuDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items;
@property(retain, nonatomic) UITableView *table; // @synthesize table;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hide;
- (void)dealloc;
- (void)hideMenuWithAnimate:(_Bool)arg1;
- (void)hideAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideAnimationDidStop;
- (void)showMenuWithAnimate:(_Bool)arg1 belowViewRect:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addItemWithText:(id)arg1 image:(id)arg2 andSelector:(SEL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

