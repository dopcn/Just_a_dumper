//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGPostItem, MKMapView, UITapGestureRecognizer;
@protocol IGMapCellDelegate;

@interface IGMapCell : UICollectionViewCell
{
    IGPostItem *_post;
    id <IGMapCellDelegate> _delegate;
    MKMapView *_mapView;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
}

@property(readonly, nonatomic) UITapGestureRecognizer *singleTapRecognizer; // @synthesize singleTapRecognizer=_singleTapRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
@property(readonly, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <IGMapCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak IGPostItem *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)onDoubleTap:(id)arg1;
- (void)onTap:(id)arg1;
- (CDStruct_d53ed6ef)defaultMapRegion;
- (void)layoutSubviews;
- (void)configureMapWithLocation:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

