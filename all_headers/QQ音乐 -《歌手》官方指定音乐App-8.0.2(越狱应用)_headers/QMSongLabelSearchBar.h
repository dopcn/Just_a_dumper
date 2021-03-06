//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QMSongLabelViewDelegate-Protocol.h"

@class NSArray, NSString, QMSongLabelView, UIImageView;
@protocol QMSongLabelSearchBarDelegate;

@interface QMSongLabelSearchBar : UIView <QMSongLabelViewDelegate>
{
    id <QMSongLabelSearchBarDelegate> _delegate;
    NSString *_placeHolderString;
    long long _scene;
    QMSongLabelView *_songLabelView;
    UIView *_searchBarView;
    UIImageView *_backgroundImageView;
    UIView *_backgroundView;
    double _searchBarHeight;
    double _topOffsetToScreen;
}

@property(nonatomic) double topOffsetToScreen; // @synthesize topOffsetToScreen=_topOffsetToScreen;
@property(nonatomic) double searchBarHeight; // @synthesize searchBarHeight=_searchBarHeight;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(retain, nonatomic) QMSongLabelView *songLabelView; // @synthesize songLabelView=_songLabelView;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *placeHolderString; // @synthesize placeHolderString=_placeHolderString;
@property(nonatomic) __weak id <QMSongLabelSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)songLabelViewLoadLabelCompleted:(id)arg1;
- (void)onSearchButtonPressed:(id)arg1;
- (void)songLabelView:(id)arg1 didSelectLabel:(id)arg2;
- (void)onLoadLabelCompleted:(_Bool)arg1;
- (void)goToSearach:(id)arg1 from:(long long)arg2;
- (void)searchBarTouchDown:(id)arg1;
- (id)createSearchBarView;
@property(readonly, nonatomic) _Bool hasShowLabel;
@property(readonly, nonatomic) UIView *btnMore;
@property(readonly, nonatomic) NSArray *showLabels;
- (double)realViewHeight;
@property(readonly, nonatomic) double originalViewHeight;
- (void)updateSearchBarUI;
- (void)cleanSongLabels;
- (void)reloadWithSongLabels:(id)arg1;
- (void)reCreateBakcgroundImage;
- (void)buildSubviews;
- (id)initWithSearchBarHeight:(double)arg1 topToScreen:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

