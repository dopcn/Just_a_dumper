//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface HotelImageInformationExtModel : CTBusinessBean
{
    int _imageCategory;
    long long _imageID;
    NSString *_imageTitle;
    NSMutableArray *_imageItemsList;
}

@property(retain, nonatomic) NSMutableArray *imageItemsList; // @synthesize imageItemsList=_imageItemsList;
@property(nonatomic) int imageCategory; // @synthesize imageCategory=_imageCategory;
@property(copy, nonatomic) NSString *imageTitle; // @synthesize imageTitle=_imageTitle;
@property(nonatomic) long long imageID; // @synthesize imageID=_imageID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

