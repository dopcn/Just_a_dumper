//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface SongListWithSongResultModel : JSONModel
{
    NSString *_listid;
    NSString *_title;
    NSString *_pic_300;
    NSString *_desc;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *pic_300; // @synthesize pic_300=_pic_300;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *listid; // @synthesize listid=_listid;
- (void).cxx_destruct;

@end

