//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FeaturedPgcerInfo : NSObject
{
    NSString *_pid;
    NSString *_name;
    NSString *_cover_url;
    NSString *_desc;
    NSString *_gotype;
    NSDictionary *_goinfo;
}

+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) NSDictionary *goinfo; // @synthesize goinfo=_goinfo;
@property(copy, nonatomic) NSString *gotype; // @synthesize gotype=_gotype;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *cover_url; // @synthesize cover_url=_cover_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void)dealloc;

@end

