//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ResponseInfo.h"

@class NSMutableArray;

@interface NetListClassAlbumResponse : ResponseInfo
{
    int _total;
    NSMutableArray *_albums;
}

@property(retain, nonatomic) NSMutableArray *albums; // @synthesize albums=_albums;
@property int total; // @synthesize total=_total;
- (void).cxx_destruct;
- (id)init;

@end

