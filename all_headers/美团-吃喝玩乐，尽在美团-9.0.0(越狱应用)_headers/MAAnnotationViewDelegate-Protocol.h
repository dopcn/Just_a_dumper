//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MAAnnotationView, UIControl;

@protocol MAAnnotationViewDelegate <NSObject>
- (struct CLLocationCoordinate2D)coordinateFromMapviewPoint:(struct CGPoint)arg1;
- (struct CGRect)annotationVisibleRect;
- (struct CGAffineTransform)annotationViewGetMapTransform:(MAAnnotationView *)arg1;
- (void)annotationView:(MAAnnotationView *)arg1 calloutAccessoryControlTapped:(UIControl *)arg2;
@end

