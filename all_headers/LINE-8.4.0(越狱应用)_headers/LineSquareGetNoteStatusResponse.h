//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LineSquareNoteStatus, NSString;

@interface LineSquareGetNoteStatusResponse : NSObject
{
    NSString *__squareMid;
    LineSquareNoteStatus *__status;
    struct {
        unsigned int squareMid:1;
        unsigned int status:1;
    } __isSet;
}

@property(retain, nonatomic) LineSquareNoteStatus *status; // @synthesize status=__status;
@property(retain, nonatomic) NSString *squareMid; // @synthesize squareMid=__squareMid;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (void)read:(id)arg1;

@end

