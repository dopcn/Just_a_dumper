//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDAccessoryInfoModel : NSObject
{
    NSString *_title;
    NSString *_more;
    NSString *_slide;
    NSString *_url;
    NSArray *_catList;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *catList; // @synthesize catList=_catList;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *slide; // @synthesize slide=_slide;
@property(copy, nonatomic) NSString *more; // @synthesize more=_more;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

