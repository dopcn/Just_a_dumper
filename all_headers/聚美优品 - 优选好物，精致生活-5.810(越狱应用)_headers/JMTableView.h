//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JMListLoadingView, UITableView, YJUITableViewManager;
@protocol JMTableViewProtocol;

@interface JMTableView : UIView
{
    _Bool _refreshTableHeader;
    _Bool _refreshTableFooter;
    _Bool _reloading;
    JMListLoadingView *_refreshTableFooterView;
    id <JMTableViewProtocol> _delegate;
    UITableView *_tableView;
    YJUITableViewManager *_manager;
}

@property(retain, nonatomic) YJUITableViewManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <JMTableViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(retain, nonatomic) JMListLoadingView *refreshTableFooterView; // @synthesize refreshTableFooterView=_refreshTableFooterView;
@property(nonatomic) _Bool refreshTableFooter; // @synthesize refreshTableFooter=_refreshTableFooter;
@property(nonatomic) _Bool refreshTableHeader; // @synthesize refreshTableHeader=_refreshTableHeader;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

