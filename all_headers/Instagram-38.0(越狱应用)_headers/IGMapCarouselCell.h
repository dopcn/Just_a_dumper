//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MKMapView, UITapGestureRecognizer;
@protocol IGMapCarouselCellDelegate;

@interface IGMapCarouselCell : UICollectionViewCell
{
    MKMapView *_mapView;
    id <IGMapCarouselCellDelegate> _delegate;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
}

- (void).cxx_destruct;
- (CDStruct_d53ed6ef)defaultMapRegion;
- (void)onDoubleTap:(id)arg1;
- (void)onTap:(id)arg1;
- (void)configureWithMapCarouselItem:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

