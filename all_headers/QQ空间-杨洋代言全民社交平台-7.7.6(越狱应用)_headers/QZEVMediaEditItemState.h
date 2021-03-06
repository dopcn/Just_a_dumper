//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QZEVMediaEditItemState : NSObject
{
    NSString *_identifier;
    id _content;
    double _rotation;
    double _scale;
    struct CGPoint _position;
    struct CGRect _bounds;
}

+ (_Bool)states:(id)arg1 areEqualToStates:(id)arg2;
+ (id)statesWithEditMemento:(id)arg1;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) id content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end

