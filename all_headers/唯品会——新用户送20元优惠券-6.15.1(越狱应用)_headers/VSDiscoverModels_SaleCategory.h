//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;
@protocol Optional;

@interface VSDiscoverModels_SaleCategory : JSONModel
{
    NSString<Optional> *_name;
    NSString<Optional> *_categoryId;
    NSString<Optional> *_image;
    NSString<Optional> *_englishname;
    NSString<Optional> *_type;
}

@property(copy, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *englishname; // @synthesize englishname=_englishname;
@property(copy, nonatomic) NSString<Optional> *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString<Optional> *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

