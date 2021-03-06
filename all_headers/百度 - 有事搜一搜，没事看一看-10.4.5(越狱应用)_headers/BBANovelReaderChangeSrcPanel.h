//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKReaderAbstractExpandPanel.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BBACopyableLabel, BBANovelBook, NSString, UIButton, UILabel, UIScrollView, UITableView, UIView;
@protocol BBANovelReaderChangeSrcPanelDelegate;

@interface BBANovelReaderChangeSrcPanel : WKReaderAbstractExpandPanel <UITableViewDataSource, UITableViewDelegate>
{
    id <BBANovelReaderChangeSrcPanelDelegate> _changeSrcDelegate;
    UILabel *_titleLabel;
    UIView *_innerView;
    UITableView *_tableView;
    UILabel *_emptyLabel;
    UIView *_failedView;
    UIButton *_complexLinkButton;
    UIScrollView *_complexLinkView;
    BBACopyableLabel *_complexLinkLabel;
    BBANovelBook *_book;
}

@property(retain, nonatomic) BBANovelBook *book; // @synthesize book=_book;
@property(retain, nonatomic) BBACopyableLabel *complexLinkLabel; // @synthesize complexLinkLabel=_complexLinkLabel;
@property(retain, nonatomic) UIScrollView *complexLinkView; // @synthesize complexLinkView=_complexLinkView;
@property(retain, nonatomic) UIButton *complexLinkButton; // @synthesize complexLinkButton=_complexLinkButton;
@property(retain, nonatomic) UIView *failedView; // @synthesize failedView=_failedView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <BBANovelReaderChangeSrcPanelDelegate> changeSrcDelegate; // @synthesize changeSrcDelegate=_changeSrcDelegate;
- (void).cxx_destruct;
- (void)cancelAction;
- (void)hide;
- (void)show;
- (void)resetPanel;
- (void)complexLineAction;
- (void)requestAction;
- (void)showTableView;
- (void)showEmptyView;
- (void)showLoadingView;
- (void)showFailView;
- (void)refrush:(int)arg1 title:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 number:(long long)arg2;
- (void)addSubviewsToCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)createComplexLinkButton;
- (void)initEmptyView;
- (void)initFailedView;
- (id)initWithBook:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

