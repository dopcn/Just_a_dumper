//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MttBarButton;
@protocol MttNovelBrowseUnitFooterBarDelegate;

@interface MttNovelBrowseUnitFooterBar : UIView
{
    unsigned long long _shelfType;
    id <MttNovelBrowseUnitFooterBarDelegate> _barDelegate;
    unsigned long long _appType;
    MttBarButton *_deleteButton;
    MttBarButton *_recommendButton;
    MttBarButton *_archiveButton;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MttBarButton *archiveButton; // @synthesize archiveButton=_archiveButton;
@property(retain, nonatomic) MttBarButton *recommendButton; // @synthesize recommendButton=_recommendButton;
@property(retain, nonatomic) MttBarButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) unsigned long long appType; // @synthesize appType=_appType;
@property(nonatomic) __weak id <MttNovelBrowseUnitFooterBarDelegate> barDelegate; // @synthesize barDelegate=_barDelegate;
@property(nonatomic) unsigned long long shelfType; // @synthesize shelfType=_shelfType;
- (void).cxx_destruct;
- (void)bottomBarButtonClicked:(id)arg1;
- (void)setArchiveItemEnable:(_Bool)arg1;
- (void)setRecommentItemEnable:(_Bool)arg1;
- (void)setDeleteItemEnable:(_Bool)arg1;
- (void)setButtonFrame:(id)arg1;
- (void)updateButtonItem;
- (void)layoutSubviews;
- (void)refreshSkin;
- (void)setEditBarItem;
- (id)initWithFrame:(struct CGRect)arg1 appType:(unsigned long long)arg2 type:(unsigned long long)arg3;

@end

