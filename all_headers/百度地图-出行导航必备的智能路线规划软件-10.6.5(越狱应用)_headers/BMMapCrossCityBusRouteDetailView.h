//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMDragMainView.h"

#import "BMCrossCityBusDetailControllerDelegate-Protocol.h"

@class BMDetailPageBottomBar, NSArray, UITableView;
@protocol BMMapCrossCityBusRouteDetailViewDelegate;

@interface BMMapCrossCityBusRouteDetailView : BMDragMainView <BMCrossCityBusDetailControllerDelegate>
{
    id <BMMapCrossCityBusRouteDetailViewDelegate> _delegate;
    BMDetailPageBottomBar *_bottomBar;
    UITableView *_tableView;
    NSArray *_items;
}

+ (id)createViewController;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) BMDetailPageBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(nonatomic) __weak id <BMMapCrossCityBusRouteDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didSelectBuyTicket:(id)arg1;
- (void)didSelectCell:(id)arg1 tableview:(id)arg2;
- (void)didSelectSection:(id)arg1;
- (id)tableViewImageForScreenShot;
- (void)contentViewDidClickToolBarAtIndex:(long long)arg1;
- (void)scrollToTop;
- (void)setBusRoute:(id)arg1 routeIndex:(unsigned long long)arg2;
- (void)setBusRoute:(id)arg1;
- (void)initContenView;
- (void)initTableView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

