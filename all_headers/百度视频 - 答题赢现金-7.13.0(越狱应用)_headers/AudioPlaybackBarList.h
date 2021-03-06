//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIButton, UIButtonEnlarge, UITableView, UITapGestureRecognizer;

@interface AudioPlaybackBarList : UIView <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _listViewWillAppear;
    CDUnknownBlockType _listViewWillDisppear;
    UITapGestureRecognizer *__tapGesture;
    UIView *__view4tap;
    UIView *__bgPanel;
    UIView *__bgBlurView;
    UITableView *__trackList;
    UIView *__barControl;
    UIButton *__btnClose;
    UIView *__sepPanel;
    UIButtonEnlarge *__btnSeq;
    UIButtonEnlarge *__btnSort;
    UIView *__sepBar;
}

@property(retain, nonatomic) UIView *_sepBar; // @synthesize _sepBar=__sepBar;
@property(retain, nonatomic) UIButtonEnlarge *_btnSort; // @synthesize _btnSort=__btnSort;
@property(retain, nonatomic) UIButtonEnlarge *_btnSeq; // @synthesize _btnSeq=__btnSeq;
@property(retain, nonatomic) UIView *_sepPanel; // @synthesize _sepPanel=__sepPanel;
@property(retain, nonatomic) UIButton *_btnClose; // @synthesize _btnClose=__btnClose;
@property(retain, nonatomic) UIView *_barControl; // @synthesize _barControl=__barControl;
@property(retain, nonatomic) UITableView *_trackList; // @synthesize _trackList=__trackList;
@property(retain, nonatomic) UIView *_bgBlurView; // @synthesize _bgBlurView=__bgBlurView;
@property(retain, nonatomic) UIView *_bgPanel; // @synthesize _bgPanel=__bgPanel;
@property(retain, nonatomic) UIView *_view4tap; // @synthesize _view4tap=__view4tap;
@property(retain, nonatomic) UITapGestureRecognizer *_tapGesture; // @synthesize _tapGesture=__tapGesture;
@property(copy, nonatomic) CDUnknownBlockType listViewWillDisppear; // @synthesize listViewWillDisppear=_listViewWillDisppear;
@property(copy, nonatomic) CDUnknownBlockType listViewWillAppear; // @synthesize listViewWillAppear=_listViewWillAppear;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_onClick_btnSort:(id)arg1;
- (void)_onClick_btnSeq:(id)arg1;
- (void)_onTap_bgPanel:(id)arg1;
- (void)_onSrvcOrderChanged:(id)arg1;
- (void)_onSrvcModeChanged:(id)arg1;
- (void)_scroll2playingTrack;
- (void)dismiss;
- (void)showAt:(id)arg1;
- (void)_buildViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

