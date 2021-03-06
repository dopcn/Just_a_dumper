//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CBYoungPreTagsViewDelegate-Protocol.h"

@class CBYoungPreTagsView, NSArray, NSString, UILabel;
@protocol CBYoungPreTagsViewDelegate;

@interface CBYoungPreferencesView : UIView <CBYoungPreTagsViewDelegate>
{
    id <CBYoungPreTagsViewDelegate> _delegate;
    UIView *_lineView;
    UILabel *_titleLabel;
    NSArray *_tagList;
    CBYoungPreTagsView *_preTagsView;
}

@property(retain, nonatomic) CBYoungPreTagsView *preTagsView; // @synthesize preTagsView=_preTagsView;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak id <CBYoungPreTagsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tagsView:(id)arg1 clickItem:(id)arg2;
- (void)layoutSubviews;
- (void)setTags:(id)arg1;
- (void)setupControl;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

