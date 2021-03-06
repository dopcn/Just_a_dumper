//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYDbBase.h"

@class NSString;

@interface QY_Parade : QYDbBase
{
    NSString *album_id;
    NSString *parade_album_id;
    NSString *parade_tvid;
    NSString *parade_desc;
    NSString *parade_image;
    int parade_order;
    NSString *__dl;
}

+ (_Bool)is_parade:(id)arg1 andtvid:(id)arg2;
+ (id)get_tv_other_by_album_id:(id)arg1;
+ (void)delete_all_parade_by_albumid:(id)arg1 toDB:(id)arg2;
+ (id)tableName;
@property(copy, nonatomic) NSString *_dl; // @synthesize _dl=__dl;
@property(copy, nonatomic) NSString *parade_image; // @synthesize parade_image;
@property(nonatomic) int parade_order; // @synthesize parade_order;
@property(copy, nonatomic) NSString *parade_desc; // @synthesize parade_desc;
@property(copy, nonatomic) NSString *parade_tvid; // @synthesize parade_tvid;
@property(copy, nonatomic) NSString *parade_album_id; // @synthesize parade_album_id;
@property(copy, nonatomic) NSString *album_id; // @synthesize album_id;
- (void).cxx_destruct;
- (long long)wirte_to_db:(id)arg1;
- (id)init;

@end

