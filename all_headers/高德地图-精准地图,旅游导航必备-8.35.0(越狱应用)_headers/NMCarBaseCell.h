//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseCell.h"

@class NSIndexPath, UIImageView, UITableView, UIView;

@interface NMCarBaseCell : NMBaseCell
{
    UIView *_tapTargetView;
    NSIndexPath *_indexPath;
    UITableView *_tableView;
    UIImageView *_topBorder;
    UIImageView *_bottomBoder;
    id _target;
    SEL _switchSelector;
    struct UIEdgeInsets _topLineEdge;
    struct UIEdgeInsets _bottomLineEdge;
}

@property(nonatomic) SEL switchSelector; // @synthesize switchSelector=_switchSelector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) UIImageView *bottomBoder; // @synthesize bottomBoder=_bottomBoder;
@property(retain, nonatomic) UIImageView *topBorder; // @synthesize topBorder=_topBorder;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) struct UIEdgeInsets bottomLineEdge; // @synthesize bottomLineEdge=_bottomLineEdge;
@property(nonatomic) struct UIEdgeInsets topLineEdge; // @synthesize topLineEdge=_topLineEdge;
- (void).cxx_destruct;
- (void)refreshContentFrame;
- (void)refreshBorder;
- (_Bool)isLast;
- (_Bool)isFirst;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

