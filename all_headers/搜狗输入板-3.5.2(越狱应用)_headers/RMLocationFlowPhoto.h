//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RMItem.h"

@class NSString;

@interface RMLocationFlowPhoto : RMItem
{
    int photo_id;
    int album_id;
    NSString *album_name;
    NSString *title;
    NSString *large_url;
    NSString *main_url;
    NSString *head_url;
    NSString *tiny_url;
}

@property(readonly, nonatomic) NSString *tiny_url; // @synthesize tiny_url;
@property(readonly, nonatomic) NSString *head_url; // @synthesize head_url;
@property(readonly, nonatomic) NSString *main_url; // @synthesize main_url;
@property(readonly, nonatomic) NSString *large_url; // @synthesize large_url;
@property(readonly, nonatomic) NSString *title; // @synthesize title;
@property(readonly, nonatomic) NSString *album_name; // @synthesize album_name;
@property(readonly, nonatomic) int album_id; // @synthesize album_id;
@property(readonly, nonatomic) int photo_id; // @synthesize photo_id;
- (id)initWithDictionary:(id)arg1;

@end

