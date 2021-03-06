//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLTableView, NSArray, NSString, WDSImStatusPopupMask;

@interface WDSImStatusPopupView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_items;
    CDUnknownBlockType _selectStatusBlock;
    GLTableView *_tableview;
    WDSImStatusPopupMask *_maskView;
    long long _currentIndex;
}

+ (id)showInView:(id)arg1 titles:(id)arg2 currentIndex:(long long)arg3 selectBlock:(CDUnknownBlockType)arg4;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) WDSImStatusPopupMask *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) GLTableView *tableview; // @synthesize tableview=_tableview;
@property(copy, nonatomic) CDUnknownBlockType selectStatusBlock; // @synthesize selectStatusBlock=_selectStatusBlock;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)show;
- (void)closeWithAnimate:(_Bool)arg1;
- (void)tapAction:(id)arg1;
- (void)layoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

