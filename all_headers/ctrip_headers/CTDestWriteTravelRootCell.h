//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTDestMoveTableViewCell.h"

@class CTDestTravelAddNodeView, CTDestWriteTravelViewCellModel;
@protocol CTDestWriteTravelTableViewCellDelegate;

@interface CTDestWriteTravelRootCell : CTDestMoveTableViewCell
{
    id <CTDestWriteTravelTableViewCellDelegate> _delegate;
    CTDestWriteTravelViewCellModel *_model;
    CTDestTravelAddNodeView *_nodeView;
}

@property(retain, nonatomic) CTDestTravelAddNodeView *nodeView; // @synthesize nodeView=_nodeView;
@property(retain, nonatomic) CTDestWriteTravelViewCellModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <CTDestWriteTravelTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collapsingAddNodeView;
- (void)clickAddBtn:(id)arg1;
- (void)delBtnClick;
- (void)fillCellContentWith:(id)arg1 status:(int)arg2;

@end

